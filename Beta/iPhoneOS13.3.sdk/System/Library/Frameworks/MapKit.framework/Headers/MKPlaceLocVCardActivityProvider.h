/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceActivityProvider.h>

@class CNContact, NSString;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider

{
    CNContact *_contact;
}

@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2;

@end
