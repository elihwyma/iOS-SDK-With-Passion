/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNInhibitor.h>

@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

{
    NSProcessInfo *_processInfo;
}

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (id)init;
- (void)stop;
- (void)start;
- (id)initWithProcessInfo:(id)arg1;

@end
