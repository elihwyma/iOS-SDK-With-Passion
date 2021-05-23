/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNHeapObject : NSObject

{
    NSString *_className;
    NSString *_binary;
    unsigned long long _count;
    unsigned long long _bytes;
}

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *binary;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long bytes;

- (id)description;
- (id)classAndBinaryKey;

@end
