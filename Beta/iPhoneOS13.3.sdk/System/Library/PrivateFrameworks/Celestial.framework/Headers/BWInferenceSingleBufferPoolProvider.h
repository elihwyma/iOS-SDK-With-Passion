/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSString;

@interface BWInferenceSingleBufferPoolProvider : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;

@end
