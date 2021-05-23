/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NULayoutContextSizerOrientationAttribute : NSObject

{
    unsigned long long _orientation;
}

@property (nonatomic, readonly) unsigned long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOrientation:(unsigned long long)arg1;
- (_Bool)matchForLayoutContext:(id)arg1;

@end
