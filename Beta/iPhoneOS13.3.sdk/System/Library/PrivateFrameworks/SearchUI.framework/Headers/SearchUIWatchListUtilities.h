/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SearchUIWatchListUtilities : NSObject

{
    _Bool _isWatchListed;
    NSString *_watchListIdentifier;
}

@property (nonatomic) _Bool isWatchListed;
@property (retain, nonatomic) NSString *watchListIdentifier;

+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)initWithResponse:(id)arg1;
- (void)toggleWatchListWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 watchListed:(_Bool)arg2;

@end
