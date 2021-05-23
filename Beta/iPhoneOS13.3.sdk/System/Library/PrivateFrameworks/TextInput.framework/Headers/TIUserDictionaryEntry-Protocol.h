/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol TIUserDictionaryEntry <Swift>

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSNumber *timestamp;

@end
