/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXColumnLayout, SXUnitConverter;

@interface SXLayoutContext : NSObject

{
    SXColumnLayout *_columnLayout;
    SXUnitConverter *_unitConverter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) SXUnitConverter *unitConverter;

- (id)initWithColumnLayout:(id)arg1 unitConverter:(id)arg2;

@end
