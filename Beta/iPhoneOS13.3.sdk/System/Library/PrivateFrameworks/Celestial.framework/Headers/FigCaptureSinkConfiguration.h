/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <Swift>

{
    NSString *_sinkID;
}

@property (copy, nonatomic) NSString *sinkID;
@property (nonatomic, readonly) int sinkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stringForSinkType:(int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
