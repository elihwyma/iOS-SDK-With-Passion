/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface NSManagedObject (TIUserDictionaryWordServer)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSDate *timestamp;

- (void)_copyAttributeValuesFromObject:(id)arg1;

@end
