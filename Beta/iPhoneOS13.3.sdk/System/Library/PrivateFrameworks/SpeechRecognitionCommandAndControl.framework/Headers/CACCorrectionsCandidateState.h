/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TUICandidateViewStyle;

@interface CACCorrectionsCandidateState : NSObject

{
    _Bool _hasBackdrop;
    _Bool _candidateNumberEnabled;
    id <TUICandidateViewStyle> _style;
    id <TUICandidateViewStyle> _disambiguationStyle;
    long long _primaryGridRowType;
    long long _disambiguationGridRowType;
    long long _disambiguationGridPosition;
    long long _sortControlPosition;
    long long _inlineTextViewPosition;
    long long _arrowButtonPosition;
    long long _arrowButtonDirection;
    double _yOffset;
    double _additionalHeight;
    unsigned long long _borders;
    struct CGPoint _arrowButtonOffset;
}

@property (retain, nonatomic) id <TUICandidateViewStyle> style;
@property (retain, nonatomic) id <TUICandidateViewStyle> disambiguationStyle;
@property (nonatomic) long long primaryGridRowType;
@property (nonatomic) long long disambiguationGridRowType;
@property (nonatomic) long long disambiguationGridPosition;
@property (nonatomic) long long sortControlPosition;
@property (nonatomic) long long inlineTextViewPosition;
@property (nonatomic) long long arrowButtonPosition;
@property (nonatomic) long long arrowButtonDirection;
@property (nonatomic) _Bool hasBackdrop;
@property (nonatomic) _Bool candidateNumberEnabled;
@property (nonatomic) double yOffset;
@property (nonatomic) double additionalHeight;
@property (nonatomic) struct CGPoint arrowButtonOffset;
@property (nonatomic) unsigned long long borders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
