/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Contacts/CNContact.h>

@class NSString;

@interface CNContact (SafariSharedExtras)

@property (nonatomic, readonly) NSString *safari_fullName;

+ (id)safari_defaultDescriptors;
+ (id)safari_imageViewDescriptors;
+ (id)safari_oneTimeCodeViewDescriptors;

- (id)safari_valueForWBSABProperty:(id)arg1;

@end
