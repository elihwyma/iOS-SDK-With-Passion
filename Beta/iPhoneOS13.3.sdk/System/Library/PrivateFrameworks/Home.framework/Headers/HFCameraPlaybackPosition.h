/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSDate, NSString;

@interface HFCameraPlaybackPosition : NSObject <Swift>

{
    unsigned long long _contentType;
    NSDate *_clipPlaybackDate;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (copy, nonatomic, readonly) NSDate *clipPlaybackDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)livePosition;
+ (id)clipPositionWithDate:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithContentType:(unsigned long long)arg1 clipPlaybackDate:(id)arg2;

@end
