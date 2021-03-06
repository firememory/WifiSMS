/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDStyle, NSDate, WDBorder, WDShading, WDDocument;



@interface WDTableProperties : NSObject <NSCopying>
{
    WDDocument *mDocument;
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    struct { 
        WDStyle *baseStyle; 
        BOOL baseStyleOverridden; 
        WDShading *shading; 
        BOOL shadingOverridden; 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        WDBorder *insideHorizontalBorder; 
        BOOL insideHorizontalBorderOverridden; 
        WDBorder *insideVerticalBorder; 
        BOOL insideVerticalBorderOverridden; 
        NSInteger justification; 
        BOOL justificationOverridden; 
        NSInteger alignment; 
        BOOL alignmentOverridden; 
        NSInteger width; 
        BOOL widthOverridden; 
        NSInteger widthType; 
        BOOL widthTypeOverridden; 
        short indent; 
        BOOL indentOverridden; 
        NSInteger indentType; 
        BOOL indentTypeOverridden; 
        short cellSpacing; 
        BOOL cellSpacingOverridden; 
        NSInteger cellSpacingType; 
        BOOL cellSpacingTypeOverridden; 
        NSInteger verticalAnchor; 
        BOOL verticalAnchorOverridden; 
        NSInteger horizontalAnchor; 
        BOOL horizontalAnchorOverridden; 
        NSInteger verticalPosition; 
        BOOL verticalPositionOverridden; 
        NSInteger horizontalPosition; 
        BOOL horizontalPositionOverridden; 
        NSInteger leftDistanceFromText; 
        BOOL leftDistanceFromTextOverridden; 
        NSInteger topDistanceFromText; 
        BOOL topDistanceFromTextOverridden; 
        NSInteger rightDistanceFromText; 
        BOOL rightDistanceFromTextOverridden; 
        NSInteger bottomDistanceFromText; 
        BOOL bottomDistanceFromTextOverridden; 
        NSInteger deleted; 
        BOOL deletedOverridden; 
        NSInteger edited; 
        BOOL editedOverridden; 
        NSInteger formattingChanged; 
        BOOL formattingChangedOverridden; 
        unsigned short indexToAuthorIDOfDeletion; 
        BOOL indexToAuthorIDOfDeletionOverridden; 
        unsigned short indexToAuthorIDOfEdit; 
        BOOL indexToAuthorIDOfEditOverridden; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        BOOL indexToAuthorIDOfFormattingChangeOverridden; 
        NSDate *deletionDate; 
        BOOL deletionDateOverridden; 
        NSDate *editDate; 
        BOOL editDateOverridden; 
        NSDate *formattingChangeDate; 
        BOOL formattingChangeDateOverridden; 
    } mOriginalProperties;
    struct { 
        WDStyle *baseStyle; 
        BOOL baseStyleOverridden; 
        WDShading *shading; 
        BOOL shadingOverridden; 
        WDBorder *topBorder; 
        BOOL topBorderOverridden; 
        WDBorder *leftBorder; 
        BOOL leftBorderOverridden; 
        WDBorder *bottomBorder; 
        BOOL bottomBorderOverridden; 
        WDBorder *rightBorder; 
        BOOL rightBorderOverridden; 
        WDBorder *insideHorizontalBorder; 
        BOOL insideHorizontalBorderOverridden; 
        WDBorder *insideVerticalBorder; 
        BOOL insideVerticalBorderOverridden; 
        NSInteger justification; 
        BOOL justificationOverridden; 
        NSInteger alignment; 
        BOOL alignmentOverridden; 
        NSInteger width; 
        BOOL widthOverridden; 
        NSInteger widthType; 
        BOOL widthTypeOverridden; 
        short indent; 
        BOOL indentOverridden; 
        NSInteger indentType; 
        BOOL indentTypeOverridden; 
        short cellSpacing; 
        BOOL cellSpacingOverridden; 
        NSInteger cellSpacingType; 
        BOOL cellSpacingTypeOverridden; 
        NSInteger verticalAnchor; 
        BOOL verticalAnchorOverridden; 
        NSInteger horizontalAnchor; 
        BOOL horizontalAnchorOverridden; 
        NSInteger verticalPosition; 
        BOOL verticalPositionOverridden; 
        NSInteger horizontalPosition; 
        BOOL horizontalPositionOverridden; 
        NSInteger leftDistanceFromText; 
        BOOL leftDistanceFromTextOverridden; 
        NSInteger topDistanceFromText; 
        BOOL topDistanceFromTextOverridden; 
        NSInteger rightDistanceFromText; 
        BOOL rightDistanceFromTextOverridden; 
        NSInteger bottomDistanceFromText; 
        BOOL bottomDistanceFromTextOverridden; 
        NSInteger deleted; 
        BOOL deletedOverridden; 
        NSInteger edited; 
        BOOL editedOverridden; 
        NSInteger formattingChanged; 
        BOOL formattingChangedOverridden; 
        unsigned short indexToAuthorIDOfDeletion; 
        BOOL indexToAuthorIDOfDeletionOverridden; 
        unsigned short indexToAuthorIDOfEdit; 
        BOOL indexToAuthorIDOfEditOverridden; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        BOOL indexToAuthorIDOfFormattingChangeOverridden; 
        NSDate *deletionDate; 
        BOOL deletionDateOverridden; 
        NSDate *editDate; 
        BOOL editDateOverridden; 
        NSDate *formattingChangeDate; 
        BOOL formattingChangeDateOverridden; 
    } mTrackedProperties;
}


- (id)init;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)document;
- (NSInteger)resolveMode;
- (void)setResolveMode:(NSInteger)arg1;
- (id)baseStyle;
- (void)setBaseStyle:(id)arg1;
- (BOOL)isBaseStyleOverridden;
- (id)shading;
- (id)mutableShading;
- (BOOL)isShadingOverridden;
- (id)topBorder;
- (id)mutableTopBorder;
- (BOOL)isTopBorderOverridden;
- (id)leftBorder;
- (id)mutableLeftBorder;
- (BOOL)isLeftBorderOverridden;
- (id)bottomBorder;
- (id)mutableBottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)rightBorder;
- (id)mutableRightBorder;
- (BOOL)isRightBorderOverridden;
- (id)insideHorizontalBorder;
- (id)mutableInsideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)insideVerticalBorder;
- (id)mutableInsideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (NSInteger)justification;
- (void)setJustification:(NSInteger)arg1;
- (BOOL)isJustificationOverridden;
- (NSInteger)alignment;
- (void)setAlignment:(NSInteger)arg1;
- (BOOL)isAlignmentOverridden;
- (long)width;
- (void)setWidth:(long)arg1;
- (BOOL)isWidthOverridden;
- (NSInteger)widthType;
- (void)setWidthType:(NSInteger)arg1;
- (BOOL)isWidthTypeOverridden;
- (short)indent;
- (void)setIndent:(short)arg1;
- (BOOL)isIndentOverridden;
- (NSInteger)indentType;
- (void)setIndentType:(NSInteger)arg1;
- (BOOL)isIndentTypeOverridden;
- (short)cellSpacing;
- (void)setCellSpacing:(short)arg1;
- (BOOL)isCellSpacingOverridden;
- (NSInteger)cellSpacingType;
- (void)setCellSpacingType:(NSInteger)arg1;
- (BOOL)isCellSpacingTypeOverridden;
- (NSInteger)verticalAnchor;
- (void)setVerticalAnchor:(NSInteger)arg1;
- (BOOL)isVerticalAnchorOverridden;
- (NSInteger)horizontalAnchor;
- (void)setHorizontalAnchor:(NSInteger)arg1;
- (BOOL)isHorizontalAnchorOverridden;
- (long)verticalPosition;
- (void)setVerticalPosition:(long)arg1;
- (BOOL)isVerticalPositionOverridden;
- (long)horizontalPosition;
- (void)setHorizontalPosition:(long)arg1;
- (BOOL)isHorizontalPositionOverridden;
- (long)leftDistanceFromText;
- (void)setLeftDistanceFromText:(long)arg1;
- (BOOL)isLeftDistanceFromTextOverridden;
- (long)topDistanceFromText;
- (void)setTopDistanceFromText:(long)arg1;
- (BOOL)isTopDistanceFromTextOverridden;
- (long)rightDistanceFromText;
- (void)setRightDistanceFromText:(long)arg1;
- (BOOL)isRightDistanceFromTextOverridden;
- (long)bottomDistanceFromText;
- (void)setBottomDistanceFromText:(long)arg1;
- (BOOL)isBottomDistanceFromTextOverridden;
- (NSInteger)deleted;
- (void)setDeleted:(NSInteger)arg1;
- (BOOL)isDeletedOverridden;
- (NSInteger)edited;
- (void)setEdited:(NSInteger)arg1;
- (BOOL)isEditedOverridden;
- (NSInteger)formattingChanged;
- (void)setFormattingChanged:(NSInteger)arg1;
- (BOOL)isFormattingChangedOverridden;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (unsigned short)indexToAuthorIDOfEdit;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (id)deletionDate;
- (void)setDeletionDate:(id)arg1;
- (BOOL)isDeletionDateOverridden;
- (id)editDate;
- (void)setEditDate:(id)arg1;
- (BOOL)isEditDateOverridden;
- (id)formattingChangeDate;
- (void)setFormattingChangeDate:(id)arg1;
- (BOOL)isFormattingChangeDateOverridden;
- (BOOL)isTableFloating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
