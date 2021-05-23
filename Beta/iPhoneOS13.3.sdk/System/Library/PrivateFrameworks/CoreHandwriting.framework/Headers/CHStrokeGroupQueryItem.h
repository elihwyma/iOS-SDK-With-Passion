/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSNumber;

@interface CHStrokeGroupQueryItem : NSObject

{
    NSNumber *_strokeGroupIdentifier;
    NSNumber *_strokeGroupStableIdentifier;
    NSArray *_strokeIdentifiers;
    long long _strokeGroupType;
    NSLocale *_preferredLocale;
    NSDictionary *__tokenizedTextResultsByLocale;
    NSDictionary *__errorsByLocale;
}

@property (copy, nonatomic, readonly) NSDictionary *_tokenizedTextResultsByLocale;
@property (copy, nonatomic, readonly) NSDictionary *_errorsByLocale;
@property (nonatomic, readonly) NSNumber *strokeGroupIdentifier;
@property (nonatomic, readonly) NSNumber *strokeGroupStableIdentifier;
@property (copy, nonatomic, readonly) NSArray *strokeIdentifiers;
@property (nonatomic, readonly) long long strokeGroupType;
@property (copy, nonatomic, readonly) NSLocale *preferredLocale;

+ (id)descriptionForStrokeGroupQueryItemType:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithStrokeGroupIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 type:(long long)arg4 preferredLocale:(id)arg5 tokenizedTextResultsByLocale:(id)arg6 errorsByLocale:(id)arg7;
- (id)textRecognitionResultForLocale:(id)arg1 error:(id *)arg2;

@end
