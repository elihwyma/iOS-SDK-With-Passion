/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class PKInk;

@interface PKTool : NSObject <Swift>

{
    PKInk *_ink;
}

@property (nonatomic, readonly) PKInk *ink;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3;
- (id)_initWithInk:(id)arg1;
- (id)initWithType:(id)arg1 color:(id)arg2 weight:(double)arg3;

@end
