/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CLLocation.h>

@class NSString;

@interface CLLocation (CKPropertiesDescription)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)CKDPLocationCoordinateFromCLLocation:(id)arg1;
+ (id)CKLocationFromPLocationCoordinate:(id)arg1;

- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
