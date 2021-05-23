/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MXExtensionRequestDispatcher : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dispatchRequest:(id)arg1 vendor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2;

@end
