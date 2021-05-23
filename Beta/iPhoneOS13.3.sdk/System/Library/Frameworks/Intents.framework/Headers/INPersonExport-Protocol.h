/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@protocol INPersonExport <Swift>

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) INPersonHandle *personHandle;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) INImage *image;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *relationship;
@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSArray *aliases;
@property (nonatomic) long long suggestionType;
@property (nonatomic) _Bool isMe;
@property (copy, nonatomic) NSArray *alternatives;

- (unsigned short)init;

@end
