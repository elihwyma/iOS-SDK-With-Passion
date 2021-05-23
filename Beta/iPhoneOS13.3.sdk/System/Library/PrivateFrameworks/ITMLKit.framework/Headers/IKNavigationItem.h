/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppDocument, NSDictionary;

@interface IKNavigationItem : NSObject

{
    IKAppDocument *_document;
    NSDictionary *_options;
}

@property (retain, nonatomic) IKAppDocument *document;
@property (retain, nonatomic) NSDictionary *options;

- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;

@end
