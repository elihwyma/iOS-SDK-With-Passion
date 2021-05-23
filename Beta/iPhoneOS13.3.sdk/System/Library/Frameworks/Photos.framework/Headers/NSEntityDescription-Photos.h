/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <CoreData/NSEntityDescription.h>

@interface NSEntityDescription (Photos)

@property (readonly) NSEntityDescription *ph_baseEntity;

- (id)ph_relationshipDescriptionsForKeyPath:(id)arg1;

@end
