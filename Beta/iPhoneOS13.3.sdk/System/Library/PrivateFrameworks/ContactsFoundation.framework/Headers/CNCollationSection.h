/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNCollationSection : NSObject

{
    NSString *_key;
    NSString *_localizedName;
}

@property (readonly) NSString *key;
@property (readonly) NSString *localizedName;

- (id)initWithKey:(id)arg1 localizedName:(id)arg2;

@end
