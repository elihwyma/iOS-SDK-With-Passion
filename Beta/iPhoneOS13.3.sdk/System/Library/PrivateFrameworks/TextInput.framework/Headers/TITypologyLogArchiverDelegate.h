/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface TITypologyLogArchiverDelegate : NSObject

{
    NSMutableSet *_objects;
}

@property (nonatomic, readonly) NSMutableSet *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;

@end
