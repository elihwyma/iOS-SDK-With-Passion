/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject

{
    MFDataHolder *_dataHolder;
}

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (_Bool)isComplete;
- (id)partName;
- (_Bool)isPartial;

@end
