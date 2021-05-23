/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WFPDFDocument : NSObject

{
    _Bool _encrypted;
    _Bool _locked;
    _Bool _allowsPrinting;
    _Bool _allowsCopying;
    struct CGPDFDocument *_documentRef;
    NSArray *_pages;
}

@property (retain, nonatomic) NSArray *pages;
@property (nonatomic, readonly) struct CGPDFDocument *documentRef;
@property (nonatomic, readonly) int majorVersion;
@property (nonatomic, readonly) int minorVersion;
@property (nonatomic, getter=isEncrypted) _Bool encrypted;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (nonatomic) _Bool allowsPrinting;
@property (nonatomic) _Bool allowsCopying;
@property (nonatomic, readonly) unsigned long long expectedPageCount;
@property (nonatomic, readonly) Class pageClass;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (_Bool)unlockWithPassword:(id)arg1;
- (id)initWithDocumentRef:(struct CGPDFDocument *)arg1;

@end
