/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MFComposeRecipients : NSObject

{
    NSArray *_recipients;
}

@property (copy, nonatomic, readonly) NSArray *recipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;

- (id)initWithRecipients:(id)arg1;

@end
