/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, VSKeychainEditingContext, VSKeychainItemKind;

__attribute__((visibility("hidden")))
@interface VSKeychainItem : NSObject

{
    _Bool _inserted;
    _Bool _updated;
    _Bool _deleted;
    _Bool _hasFaultForData;
    VSKeychainEditingContext *_editingContext;
    VSKeychainItemKind *_itemKind;
    NSMutableDictionary *_committedValues;
    NSMutableDictionary *_primitiveValues;
}

@property (retain, nonatomic) NSMutableDictionary *committedValues;
@property (weak, nonatomic) VSKeychainEditingContext *editingContext;
@property (nonatomic, getter=isInserted) _Bool inserted;
@property (nonatomic, getter=isUpdated) _Bool updated;
@property (nonatomic, getter=isDeleted) _Bool deleted;
@property (retain, nonatomic) NSMutableDictionary *primitiveValues;
@property (nonatomic) _Bool hasFaultForData;
@property (copy, nonatomic, readonly) VSKeychainItemKind *itemKind;
@property (nonatomic, readonly) _Bool hasChanges;
@property (nonatomic, readonly) _Bool hasPersistentChangedValues;
@property (copy, nonatomic) NSData *data;

- (id)init;
- (id)description;
- (void)willChangeValueForKey:(id)arg1;
- (id)primitiveValueForKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)committedValuesForKeys:(id)arg1;
- (id)changedValues;
- (id)committedValueForKey:(id)arg1;
- (id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2;
- (void)_setCommittedValues:(id)arg1 registeringUndo:(_Bool)arg2;

@end
