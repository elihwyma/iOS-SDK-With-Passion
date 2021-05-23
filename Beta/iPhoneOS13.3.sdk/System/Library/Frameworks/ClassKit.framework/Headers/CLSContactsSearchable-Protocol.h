/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@class NSPersonNameComponents, NSString;

@protocol CLSContactsSearchable

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *groupIdentifier;

@end
