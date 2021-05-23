/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLZeroKeywordStore : NSObject

{
    NSString *_storePath;
}

+ (id)expectedClasses;

- (id)initWithPath:(id)arg1;
- (void)deleteStore;
- (id)currentZeroKeywords;
- (void)updateZeroKeywordsTo:(id)arg1;

@end
