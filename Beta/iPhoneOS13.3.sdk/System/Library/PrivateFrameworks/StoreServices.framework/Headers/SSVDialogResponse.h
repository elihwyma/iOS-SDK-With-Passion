/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface SSVDialogResponse : NSObject

{
    long long _selectedButtonIndex;
    NSArray *_textFieldValues;
}

@property (nonatomic) long long selectedButtonIndex;
@property (copy, nonatomic) NSArray *textFieldValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
