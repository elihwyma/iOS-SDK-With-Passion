/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject

{
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}

- (void)dealloc;
- (id)description;
- (id)stringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)UUIDStringForKey:(id)arg1;
- (_Bool)getInt32:(int *)arg1 forKey:(id)arg2;
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(id)arg2;
- (_Bool)getUInt16:(unsigned short *)arg1 forKey:(id)arg2;
- (id)initWithAttributes:(id)arg1 unknownAttributes:(id)arg2;

@end
