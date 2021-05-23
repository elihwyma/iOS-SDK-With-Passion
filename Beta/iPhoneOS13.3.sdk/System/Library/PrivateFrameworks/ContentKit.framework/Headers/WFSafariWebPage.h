/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSData, NSItemProvider, NSString, NSURL;

@interface WFSafariWebPage : NSObject <Swift>

{
    NSURL *_URL;
    NSString *_pageTitle;
    NSString *_selectionText;
    NSData *_selectionHTML;
    NSData *_documentHTML;
    NSItemProvider *_itemProvider;
}

@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *pageTitle;
@property (copy, nonatomic, readonly) NSString *selectionText;
@property (copy, nonatomic, readonly) NSData *selectionHTML;
@property (copy, nonatomic, readonly) NSData *documentHTML;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (void)retrieveWebPageFromItemProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)webPageFromItemDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)wfSerializedRepresentation;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5;

@end
