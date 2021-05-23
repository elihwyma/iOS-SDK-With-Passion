/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SidecarItem : NSObject

{
    NSData *_data;
    NSString *_type;
}

@property (copy, readonly) id objectValue;
@property (readonly) NSData *data;
@property (readonly) NSString *type;

- (id)description;
- (id)debugDescription;
- (_Bool)conformsToType:(id)arg1;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (id)initWithObject:(id)arg1 type:(id)arg2;

@end
