/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFill.h>

@class NSString;

@interface SXVideoFill : SXFill

@property (nonatomic, readonly) NSString *stillImageIdentifier;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) _Bool loop;

- (_Bool)loopWithValue:(id)arg1 withType:(int)arg2;

@end
