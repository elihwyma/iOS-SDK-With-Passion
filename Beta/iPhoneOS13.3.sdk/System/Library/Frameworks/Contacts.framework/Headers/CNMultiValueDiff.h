/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNMultiValueDiff : NSObject

{
    NSArray *_updates;
}

@property (copy, nonatomic, readonly) NSArray *updates;

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;
+ (id)emptyDiff;

- (id)description;
- (_Bool)isEmpty;
- (id)initWithUpdates:(id)arg1;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (_Bool)applyToABPerson:(void *)arg1 propertyDescription:(id)arg2 logger:(id)arg3 error:(id *)arg4;

@end
