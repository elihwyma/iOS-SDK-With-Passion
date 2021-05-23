/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLSearchResultSection : NSObject

{
    unsigned long long _resultTypes;
    unsigned long long _categoryMask;
    NSArray *_searchResults;
}

@property (nonatomic, readonly) unsigned long long resultTypes;
@property (nonatomic, readonly) unsigned long long categoryMask;
@property (nonatomic, readonly) NSArray *searchResults;

- (id)initWithResultTypes:(unsigned long long)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3;

@end
