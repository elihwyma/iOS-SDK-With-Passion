/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXEdgeSpacing;

@interface SXDebugAdLayout : NSObject

{
    id <SXEdgeSpacing> _margin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXEdgeSpacing> margin;

- (id)initWithMargin:(struct _SXConvertibleValue)arg1;

@end
