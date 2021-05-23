/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileWrapper, NSString;

@interface _WKAttachmentInfo : NSObject

{
    struct RetainPtr<NSFileWrapper> _fileWrapper;
    struct RetainPtr<NSString> _mimeType;
    struct RetainPtr<NSString> _utiType;
    struct RetainPtr<NSString> _filePath;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSFileWrapper *fileWrapper;

- (id).cxx_construct;
- (id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4;

@end
