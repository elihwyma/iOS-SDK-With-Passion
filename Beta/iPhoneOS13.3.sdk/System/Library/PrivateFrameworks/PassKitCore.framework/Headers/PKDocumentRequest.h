/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class DIAttributeDocument, NSString;

@interface PKDocumentRequest : NSObject

{
    unsigned long long _documentType;
    NSString *_countryCode;
    DIAttributeDocument *_documentAttribute;
}

@property (nonatomic) unsigned long long documentType;
@property (nonatomic) NSString *countryCode;
@property (retain, nonatomic) DIAttributeDocument *documentAttribute;

@end
