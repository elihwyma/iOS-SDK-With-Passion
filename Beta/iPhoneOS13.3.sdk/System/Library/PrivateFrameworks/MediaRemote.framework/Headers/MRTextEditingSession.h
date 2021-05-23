/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRTextEditingAttributes, NSString;

@interface MRTextEditingSession : NSObject

{
    NSString *_text;
    _Bool _editing;
    MRTextEditingAttributes *_attributes;
    unsigned long long _uniqueIdentifier;
}

@property (nonatomic, readonly) unsigned long long uniqueIdentifier;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;
@property (nonatomic, readonly) MRTextEditingAttributes *attributes;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)initWithText:(id)arg1 attributes:(id)arg2;

@end
