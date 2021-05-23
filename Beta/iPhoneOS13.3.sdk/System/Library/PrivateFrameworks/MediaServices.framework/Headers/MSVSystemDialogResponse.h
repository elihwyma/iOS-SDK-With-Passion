/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MSVSystemDialogResponse : NSObject

{
    long long _buttonIdentifier;
    NSArray *_textFieldValues;
}

@property (nonatomic, readonly) long long buttonIdentifier;
@property (nonatomic, readonly) NSArray *textFieldValues;

- (id)description;
- (id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2;

@end
