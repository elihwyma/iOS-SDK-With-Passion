/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKUpdateServiceRequest, NSArray, NSMutableOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentAutomaticUpdateContext : NSObject

{
    IKUpdateServiceRequest *_currentUpdateRequest;
    NSArray *_receivedEvents;
    NSMutableOrderedSet *_remainingViewElements;
}

@property (retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest;
@property (copy, nonatomic) NSArray *receivedEvents;
@property (retain, nonatomic) NSMutableOrderedSet *remainingViewElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_documentUpdateRequestForViewElement:(id)arg1 appContext:(id)arg2 documentRef:(id)arg3;
- (void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;
- (void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;
- (id)initWithEvents:(id)arg1 viewElements:(id)arg2;

@end
