import React from 'react';
import { BookProvider } from './contexts/BookContext';
import Header from './components/Header';
import SearchSection from './components/SearchSection';
import BookResults from './components/BookResults';
import ReadingList from './components/ReadingList';

function App() {
  return (
    <BookProvider>
      <div className="min-h-screen bg-gradient-to-br from-blue-50 via-indigo-50 to-purple-50">
        <Header />
        <main className="container mx-auto px-4 py-8">
          <SearchSection />
          <div className="mt-8 grid grid-cols-1 xl:grid-cols-4 gap-8">
            <div className="xl:col-span-3">
              <BookResults />
            </div>
            <div className="xl:col-span-1">
              <ReadingList />
            </div>
          </div>
        </main>
      </div>
    </BookProvider>
  );
}

export default App;
