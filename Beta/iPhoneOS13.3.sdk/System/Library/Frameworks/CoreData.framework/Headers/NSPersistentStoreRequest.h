/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NSPersistentStoreRequest : NSObject

{
    NSArray *_affectedStores;
}

@property (retain, nonatomic) NSArray *affectedStores;
@property (readonly) unsigned long long requestType;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_secureOperation;
- (void)_setSecureOperation:(_Bool)arg1;

@end
