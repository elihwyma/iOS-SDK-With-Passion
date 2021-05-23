/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WLMessageAttachment : NSObject

{
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_uti;
    NSData *_data;
    long long *_rowID;
    NSString *_guid;
}

@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) NSString *uti;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic) long long *rowID;
@property (nonatomic) NSString *guid;

- (id)_initWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 uti:(id)arg4;

@end
