/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@interface MPResponse : NSObject <Swift>

{
    _Bool _valid;
    id _request;
    NSArray *_middleware;
    id _builder;
}

@property (copy, nonatomic) NSArray *middleware;
@property (nonatomic, readonly) id builder;
@property (copy, nonatomic, readonly) id request;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)builderProtocol;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)_stateDumpObject;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (id)chain;

@end
