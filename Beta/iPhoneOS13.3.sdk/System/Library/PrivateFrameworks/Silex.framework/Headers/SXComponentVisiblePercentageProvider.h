/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXViewport;

@interface SXComponentVisiblePercentageProvider : NSObject

{
    SXViewport *_viewport;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)visiblePercentageOfObject:(id)arg1;
- (id)initWithViewport:(id)arg1;

@end
