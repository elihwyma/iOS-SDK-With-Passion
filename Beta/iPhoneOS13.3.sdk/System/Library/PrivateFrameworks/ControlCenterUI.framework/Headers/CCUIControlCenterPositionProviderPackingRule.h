/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@interface CCUIControlCenterPositionProviderPackingRule : NSObject <Swift>

{
    unsigned long long _packFrom;
    unsigned long long _packingOrder;
    struct CCUILayoutSize _sizeLimit;
}

@property (nonatomic, readonly) unsigned long long packFrom;
@property (nonatomic, readonly) unsigned long long packingOrder;
@property (nonatomic, readonly) struct CCUILayoutSize sizeLimit;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPackFrom:(unsigned long long)arg1 packingOrder:(unsigned long long)arg2 sizeLimit:(struct CCUILayoutSize)arg3;

@end
