/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@protocol SFReaderContext <Swift>

- (unsigned short)clearAvailability;
- (unsigned short)loadNewArticle;
- (unsigned short)isLoadingNextPage;
- (unsigned short)activateFont: /* Error: Ran out of types for this method. */;
- (unsigned short)checkReaderAvailability;
- (unsigned short)createArticleFinder;
- (unsigned short)setReaderLanguageTag: /* Error: Ran out of types for this method. */;
- (unsigned short)isReaderAvailable;
- (unsigned short)stopLoadingNextPage;
- (unsigned short)clearReaderWebView;
- (unsigned short)shouldCreateArticleFinder;
- (unsigned short)activateReader;
- (unsigned short)deactivateReaderNow: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollPositionInformation;
- (unsigned short)clearUnusedReaderResourcesSoon;
- (unsigned short)readerURL;
- (unsigned short)configurationManager;
- (unsigned short)fontManager;
- (unsigned short)collectReaderContentForMailWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setReaderFont: /* Error: Ran out of types for this method. */;
- (unsigned short)setReaderTheme:forAppearance: /* Error: Ran out of types for this method. */;
- (unsigned short)canIncreaseReaderTextSize;
- (unsigned short)canDecreaseReaderTextSize;
- (unsigned short)increaseReaderTextSize;
- (unsigned short)decreaseReaderTextSize;
- (unsigned short)resetReaderTextSize;

@end
