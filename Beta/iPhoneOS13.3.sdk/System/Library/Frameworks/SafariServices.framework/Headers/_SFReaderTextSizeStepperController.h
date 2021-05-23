/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SFReaderContext;

__attribute__((visibility("hidden")))
@interface _SFReaderTextSizeStepperController : NSObject

{
    id <SFReaderContext> _readerContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithReaderContext:(id)arg1;
- (void)prepareStepper:(id)arg1;
- (void)incrementValue:(id)arg1;
- (void)decrementValue:(id)arg1;
- (void)_updateStepperControls:(id)arg1;

@end
