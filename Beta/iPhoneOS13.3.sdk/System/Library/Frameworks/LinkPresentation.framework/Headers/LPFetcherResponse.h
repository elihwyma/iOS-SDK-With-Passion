/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPFetcherResponse : NSObject

{
    long long _state;
    id _userData;
}

@property (nonatomic, readonly) long long state;
@property (retain, nonatomic, readonly) id userData;

- (id)initWithState:(long long)arg1 fetcher:(id)arg2;

@end
