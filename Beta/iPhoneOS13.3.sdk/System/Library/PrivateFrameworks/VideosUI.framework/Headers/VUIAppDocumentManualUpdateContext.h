/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKUpdateServiceRequest, IKViewElement, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentManualUpdateContext : NSObject

{
    IKUpdateServiceRequest *_currentUpdateRequest;
    NSDictionary *_contextDictionary;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest;
@property (retain, nonatomic) NSDictionary *contextDictionary;
@property (weak, nonatomic) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;
- (void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;
- (id)initWithContextDictionary:(id)arg1 viewElement:(id)arg2;

@end
