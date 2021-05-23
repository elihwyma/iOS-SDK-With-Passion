/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMessage, MFMessageLibrary, NSString;

@interface _MFDALibraryConsumerFactory : NSObject

{
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property (retain, nonatomic) MFMessageLibrary *library;
@property (retain, nonatomic) MFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)dataConsumerForPart:(id)arg1;

@end
