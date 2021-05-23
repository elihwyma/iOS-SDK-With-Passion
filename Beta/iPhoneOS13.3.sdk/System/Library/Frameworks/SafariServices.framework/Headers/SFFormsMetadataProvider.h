/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SFFormsMetadataProvider : NSObject

{
    NSDictionary *_frameHandleToForms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long formCount;

- (void)enumerateFormsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrameHandleToFormsDictionary:(id)arg1;

@end
