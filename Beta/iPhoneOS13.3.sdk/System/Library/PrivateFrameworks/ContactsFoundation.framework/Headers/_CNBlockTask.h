/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNTask.h>

@interface _CNBlockTask : CNTask

{
    CDUnknownBlockType _block;
}

- (id)initWithName:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)run:(id *)arg1;
- (id)initWithName:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
