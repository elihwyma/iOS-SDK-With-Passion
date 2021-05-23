/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface OITSUHTMLLog : NSObject

{
    NSString *_path;
    NSString *_title;
    NSString *_stylesheet;
    NSString *_script;
    NSFileHandle *_handle;
    _Bool _logStarted;
    unsigned long long _uniquifier;
    unsigned long long _tableRow;
}

@property (nonatomic, readonly) NSString *path;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *stylesheet;
@property (copy, nonatomic) NSString *script;

- (void)dealloc;
- (void)clear;
- (void)close;
- (id)initWithPath:(id)arg1;
- (void)logBegin;
- (void)_writeMarkupData:(id)arg1;
- (void)writeMarkup:(id)arg1;
- (id)uniqueIdentifierWithPrefix:(id)arg1;
- (void)writeText:(id)arg1;
- (void)logEnd;
- (void)openInBrowser;

@end
