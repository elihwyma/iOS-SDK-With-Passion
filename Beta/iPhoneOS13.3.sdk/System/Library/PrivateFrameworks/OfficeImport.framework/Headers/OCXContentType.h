/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXContentType : NSObject

{
    NSString *mContentType;
    NSString *mPath;
    NSString *mExtension;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *path;

- (_Bool)isOverride;
- (void)writeToStreamWriter:(id)arg1;
- (id)initWithContentType:(id)arg1 path:(id)arg2;
- (id)initWithContentType:(id)arg1 extension:(id)arg2;

@end
