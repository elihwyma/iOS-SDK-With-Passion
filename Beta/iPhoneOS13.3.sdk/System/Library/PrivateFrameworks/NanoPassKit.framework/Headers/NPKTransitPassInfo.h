/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, PKTransitPassProperties;

@interface NPKTransitPassInfo : NSObject

{
    PKTransitPassProperties *_transitProperties;
    NSArray *_balanceFields;
}

@property (nonatomic, readonly) PKTransitPassProperties *transitProperties;
@property (nonatomic, readonly) NSArray *balanceFields;

- (id)description;
- (id)initWithTransitProperties:(id)arg1 balanceFields:(id)arg2;

@end
